class Employee:
    def __init__(self, role, department, salary):
        self.role = role
        self.department = department
        self.salary = salary
    def show_details(self):
        """Display the details of the employee."""
        return (f"Role: {self.role}\n"
                f"Department: {self.department}\n"
                f"Salary: ${self.salary:,.2f}")
class Engineer(Employee):
    def __init__(self, name, age, role, department, salary):
        super().__init__(role, department, salary)  
        self.name = name
        self.age = age
    def show_details(self):
        """Display the details of the engineer, including inherited attributes."""
        base_details = super().show_details() 
        return (f"{base_details}\n"
                f"Name: {self.name}\n"
                f"Age: {self.age}")
if __name__ == "__main__":
    engineer = Engineer("Alice Smith", 30, "Software Engineer", "Development", 85000)
    print(engineer.show_details())
