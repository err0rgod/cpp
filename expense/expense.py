from exceptions import invalidexpenseerror

class Expense:
    def __init__(self,title: str, amount : float, category: str):
        if not title.strip():
            raise invalidexpenseerror("Title cannot be empty")
        if amount <= 0:
            raise invalidexpenseerror("Amount should be greater than Zero")
        if not category.strip():
            raise invalidexpenseerror("Category cannot be empty")
        
        self.title = title
        self.category = category
        self.amount = amount

    def __str__(self) -> str:
        return f"{self.title} | ${self.amount} | {self.category}"
    

    def to_dict(self) -> dict:
        return{
            "title" : self.title,
            "amount" : self.amount,
            "category" : self.category
        }