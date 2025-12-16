# user database
users = {}

maxAttempts = 3

# function to register
def register():
    username = input("Enter your username: ")

    if username in users:
        print(f"The username {username} already exist")
        return
    
    password = input("Enter your password: ")

    users[username] = {
        "password" : password,
        "attempts" : 0,
        "locked" : False
    }

    print("Registration succesfull.")

# function to login
def login():
    username = input("Enter your username: ")

    if username not in users:
        print(f"Username {username} not found.")
    if users[username]["locked"]:
        print("Account is locked.")
        return
    
    password = input("Input password: ")

    if password == users[username]["password"]:
        print("Login successful")
        users[username]["attempts"] = 0
    else:
        users[username]["attempts"] += 1
        print("Wrong password")

    if users[username]["attempts"] >= maxAttempts:
        users[username]["locked"] = True
        print("Account is locked")

# function to show menu
def menu():
    print("1. Register")
    print("2. Login")
    print("3. Exit")

# function of main
def main():
    while True:
        menu()
        choice = input("Enter here your option:  ")

        if choice == '1':
            register()
        elif choice == '2':
            login()
        elif choice == '3':
            print("Good Bye.")
        else: 
            print("Invalid choice")


main()
