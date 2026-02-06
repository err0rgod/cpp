import json
from expense import Expense 

class storage:
    FILE_NAME = "data.json"

    @staticmethod
    def save(expenses : list[Expense]) -> None:
        data = [
            {
                "title":exp.title,
                "amount" : exp.amount,
                "Category" : exp.category
            }
            for exp in expenses 
        ]

        with open(storage.FILE_NAME,"w") as file:
            json.dump(data,file,indent=4)

    @staticmethod
    def load() -> list[Expense]:
        try:
            with open(storage.FILE_NAME, "r") as file:
                data = json.load(file)
                return [
                    Expense(item["title"],item["amount"],item["Category"])
                    for item in data
                ]
        except FileNotFoundError:
            return[]