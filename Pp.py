import sqlite3
import bcrypt


# Database setup
def create_tables():
    conn = sqlite3.connect('vehicle_service.db')
    cursor = conn.cursor()

    cursor.execute('''
    CREATE TABLE IF NOT EXISTS Users (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        username TEXT NOT NULL UNIQUE,
        password_hash TEXT NOT NULL
    )
    ''')

    cursor.execute('''
    CREATE TABLE IF NOT EXISTS Vehicles (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        owner TEXT NOT NULL,
        make TEXT NOT NULL,
        model TEXT NOT NULL,
        year INTEGER NOT NULL,
        license_plate TEXT NOT NULL
    )
    ''')

    cursor.execute('''
    CREATE TABLE IF NOT EXISTS Services (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        vehicle_id INTEGER,
        service_date TEXT NOT NULL,
        description TEXT NOT NULL,
        cost REAL NOT NULL,
        FOREIGN KEY(vehicle_id) REFERENCES Vehicles(id)
    )
    ''')

    conn.commit()
    conn.close()


# User class
class User:
    def __init__(self, username, password):
        self.username = username
        self.password = password

    def hash_password(self):
        self.password = bcrypt.hashpw(self.password.encode('utf-8'), bcrypt.gensalt())

    def save_to_db(self):
        conn = sqlite3.connect('vehicle_service.db')
        cursor = conn.cursor()
        cursor.execute('INSERT INTO Users (username, password_hash) VALUES (?, ?)', (self.username, self.password))
        conn.commit()
        conn.close()

    @staticmethod
    def authenticate(username, password):
        conn = sqlite3.connect('vehicle_service.db')
        cursor = conn.cursor()
        cursor.execute('SELECT password_hash FROM Users WHERE username=?', (username,))
        stored_password = cursor.fetchone()
        conn.close()
        if stored_password and bcrypt.checkpw(password.encode('utf-8'), stored_password[0]):
    main()
