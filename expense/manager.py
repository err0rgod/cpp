from expense import Expense
from storage import storage
class expensemanager:
    def __init__(self):
        self.expenses = storage.load()
    def add_expense(self,expense : Expense) -> None:
        self.expenses.append(expense)
        storage.save(self.expenses)

    def list_expense(self) -> None:
        if not self.expenses:
            print("No expenses Found")
            return 
        

        for idx,expense in enumerate(self.expenses, start=1):
            print(f"{idx}.{expense}")

    def total_spent(self) -> float:
        return sum(exp.amount for exp in self.expenses)
    
    def total_by_category(self, category: str) -> float:
        return sum(
            exp.amount for exp in self.expenses
            if exp.category.lower() == category.lower()
        )
