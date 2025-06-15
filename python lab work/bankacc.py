class BankAccount:
    def __init__(self, account_number, account_holder, balance=0):
        self.account_number = account_number
        self.account_holder = account_holder
        self.balance = balance
    def deposit(self, amount):
        self.balance += amount
        print(f"{amount} deposited. New balance: {self.balance}")
    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds!")
        else:
            self.balance -= amount
            print(f"{amount} withdrawn. New balance: {self.balance}")
    def check_balance(self):
        return self.balance
account = BankAccount("123456", "Alice", 1000)
account.deposit(500)             
account.withdraw(200)             
print(account.check_balance())    
