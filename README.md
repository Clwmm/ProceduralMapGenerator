## ProceduralMapGenerator with SFML 2.5.1

## INFO
- You can change size range of the rooms:  
MapGenerator::roomSizeFrom  
MapGenerator::roomSizeTo
- You can change the distance between the rooms:  
MapGenerator::distanceBetween
- You can change the number of rooms:  
MapGenerator::noOfRooms //Min 1
- You can change maximum deflection:  
MapGenerator::moveRandomRoom
With the i5-9400f, it takes about 15 seconds to generate 10,000 rooms.


## Controls
- WSAD - movement
- Q & E - zooming
- Space - generate new map
- ESC - exit

## Sample Maps:
- RoomSizeFrom: 900, roomSizeTo: 900, distanceBetween: 0, moveRandomRoom: 900, noOfRooms: 250
![Photo](https://github.com/Clwmm/ProceduralMapGenerator/blob/master/Procedural%20Map%20Generator/res/900%3B900%3B0%3B900%3B250.png)
- RoomSizeFrom: 900, roomSizeTo: 900, distanceBetween: 350, moveRandomRoom: 900, noOfRooms: 250
![Photo](https://github.com/Clwmm/ProceduralMapGenerator/blob/master/Procedural%20Map%20Generator/res/900%3B900%3B350%3B900%3B250.png)
- RoomSizeFrom: 450, roomSizeTo: 900, distanceBetween: 100, moveRandomRoom: 100, noOfRooms: 250
![Photo](https://github.com/Clwmm/ProceduralMapGenerator/blob/master/Procedural%20Map%20Generator/res/450%3B900%3B100%3B100%3B250.png)
- RoomSizeFrom: 600, roomSizeTo: 1500, distanceBetween: 0, moveRandomRoom: 50, noOfRooms: 250
![Photo](https://github.com/Clwmm/ProceduralMapGenerator/blob/master/Procedural%20Map%20Generator/res/600%3B1500%3B0%3B50%3B250.png)
- RoomSizeFrom: 700, roomSizeTo: 900, distanceBetween: 150, moveRandomRoom: 75, noOfRooms: 250
![Photo](https://github.com/Clwmm/ProceduralMapGenerator/blob/master/Procedural%20Map%20Generator/res/700%3B900%3B150%3B75%3B250.png)
