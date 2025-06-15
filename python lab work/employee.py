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
if __name__ == "__main__":
    employee = Employee("Software Engineer", "Development", 85000)
    print(employee.show_details())
