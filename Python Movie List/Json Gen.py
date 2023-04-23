import json

# List of 50 movies with their release years
movies =[
    {"name": "The Shawshank Redemption", "year": 1994},
    {"name": "The Godfather", "year": 1972},
    {"name": "The Godfather: Part II", "year": 1974},
    {"name": "The Dark Knight", "year": 2008},
    {"name": "12 Angry Men", "year": 1957},
    {"name": "Schindler's List", "year": 1993},
    {"name": "The Lord of the Rings: The Return of the King", "year": 2003},
    {"name": "Pulp Fiction", "year": 1994},
    {"name": "The Lord of the Rings: The Fellowship of the Ring", "year": 2001},
    {"name": "Forrest Gump", "year": 1994},
    {"name": "Inception", "year": 2010},
    {"name": "The Lord of the Rings: The Two Towers", "year": 2002},
    {"name": "Star Wars: Episode V - The Empire Strikes Back", "year": 1980},
    {"name": "The Matrix", "year": 1999},
    {"name": "Goodfellas", "year": 1990},
    {"name": "One Flew Over the Cuckoo's Nest", "year": 1975},
    {"name": "Seven Samurai", "year": 1954},
    {"name": "Se7en", "year": 1995},
    {"name": "City of God", "year": 2002},
    {"name": "Life is Beautiful", "year": 1997},
    {"name": "The Silence of the Lambs", "year": 1991},
    {"name": "It's a Wonderful Life", "year": 1946},
    {"name": "Saving Private Ryan", "year": 1998},
    {"name": "The Green Mile", "year": 1999},
    {"name": "Interstellar", "year": 2014},
    {"name": "Léon: The Professional", "year": 1994},
    {"name": "Spirited Away", "year": 2001},
    {"name": "The Prestige", "year": 2006},
    {"name": "The Usual Suspects", "year": 1995},
    {"name": "American History X", "year": 1998},
    {"name": "Gladiator", "year": 2000},
    {"name": "The Lion King", "year": 1994},
    {"name": "The Departed", "year": 2006},
    {"name": "Whiplash", "year": 2014},
    {"name": "The Intouchables", "year": 2011},
    {"name": "Terminator 2: Judgment Day", "year": 1991},
    {"name": "The Pianist", "year": 2002},
    {"name": "Back to the Future", "year": 1985},
    {"name": "The Shining", "year": 1980},
    {"name": "Alien", "year": 1979},
    {"name": "The Great Dictator", "year": 1940},
    {"name": "The Sting", "year": 1973},
    {"name": "The Treasure of the Sierra Madre", "year": 1948},
    {"name": "Gone with the Wind", "year": 1939},
    {"name": "The Bridge on the River Kwai", "year": 1957},
    {"name": "Lawrence of Arabia", "year": 1962},
    {"name": "On the Waterfront", "year": 1954},
    {"name": "Singin' in the Rain", "year": 1952},
    {"name": "Sunset Boulevard", "year": 1950},
    {"name": "The African Queen", "year": 1951},
    {"name": "Doctor Zhivago", "year": 1965},
    {"name": "Bonnie and Clyde", "year": 1967},
    {"name": "Butch Cassidy and the Sundance Kid", "year": 1969},
    {"name": "Midnight Cowboy", "year": 1969},
    {"name": "The French Connection", "year": 1971},
    {"name": "The Exorcist", "year": 1973},
    {"name": "Jaws", "year": 1975},
    {"name": "Rocky", "year": 1976},
    {"name": "Star Wars", "year": 1977},
    {"name": "Raiders of the Lost Ark", "year": 1981},
    {"name": "E.T. the Extra-Terrestrial", "year": 1982},
    {"name": "The Terminator", "year": 1984},
    {"name": "Platoon", "year": 1986},
    {"name": "The Last Emperor", "year": 1987},
    {"name": "Rain Man", "year": 1988},
    {"name": "Unforgiven", "year": 1992},
    {"name": "Braveheart", "year": 1995},
    {"name": "Titanic", "year": 1997},
    {"name": "A Beautiful Mind", "year": 2001},
    {"name": "Million Dollar Baby", "year": 2004},
    {"name": "Crash", "year": 2004},
    {"name": "No Country for Old Men", "year": 2007},
    {"name": "There Will Be Blood", "year": 2007} ]

movies_data = []

for movie in movies:
        seen = False
        watch_list = False
        movie_data = {"name": movie['name'], "year": movie['year'], "seen": seen, "watch_list": watch_list}
        movies_data.append(movie_data)
#
# # Write the JSON data to a file
# with open("movies.json", "a") as outfile:
#     json.dump(movies_data, outfile)

with open("data.json", "w") as json_file:
        # Write the dictionary to the file as JSON data
        json.dump(movies_data, json_file)
