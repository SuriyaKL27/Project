from player_module import Player
from flight_module import Flight
from airport_module import Airport
from destination_module import Destination

def main():
    player = Player()
    flight = Flight()
    airport = Airport()
    destination = Destination()

    player.introduction(player)
    airport.select_airplane(flight)
    destination.choose_destination(flight destination)
    airport.takeoff(flight)
    airport.land(flight)