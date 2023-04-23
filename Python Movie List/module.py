import json
import random


class AppMovie():
    def __init__(self):
        with open("data.json", "r") as file:
            self.db = json.load(file)

    def ask(self):
        num = int(input("1)Random movie picker? \n2) Check Movies \n3) Edit To-Watch list \n4) Check Watchlist\n5) Exit"))
        match num:
            case 1:
                self.RandomMovie()
            case 2:
                self.CheckMovies()
            case 3:
                self.Edit()
            case 4:
                self.MovieList()
            case 5:
                exit()

    def RandomMovie(self):
        print("\nHere are your random movie recommendations!!")
        i = 0
        while( i < 5 ):
            id = random.randint(0, 72)
            if not self.db[id]["seen"]:
                print(self.db.index(self.db[id]) + 1, self.db[id]["name"])
                i = i + 1


    def  MovieList(self):
        for movie in self.db:
            if movie['watch_list']:
                print(self.db.index(movie)+1, movie['name'])

    def CheckMovies(self):
        print("\nHere are all of the movies we have: ")
        for movie in self.db:
            print(self.db.index(movie) + 1, movie["name"], " - ", "Watched" if movie['seen'] else "Not Watched")



    def Edit(self):
        choice = int(input("\nyou're in edit mode! "
                           "\nwhat would you like to do?"
                           "\n1- add a movie to your list"
                           "\n2- remove a movie from your list "
                           "\n3- mark a movie as seen on your list\n"))
        match choice:
            case 1:
                self.__editor("watch_list", True, "add to")
            case 2:
                self.__editor("watch_list", False, "remove from")
            case 3:
                self.__editor("seen", True, "mark as seen on")
            case _:
                print("wrong input please try again")
                self.Edit()

    def __editor(self, field, value, text):
        id = int(input(f"\nwhat is the id of the movie you want to {text} your list?"))
        self.db[id-1][field] = value
        with open("data.json", "w") as file2:
            json.dump(self.db, file2)
        print("Done!\n")