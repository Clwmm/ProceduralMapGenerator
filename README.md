## ProceduralMapGenerator with SFML 2.5.1

## INFO
- You can change size range of the rooms:  
MapGenerator::roomSizeFrom  
MapGenerator::roomSizeTo
- You can change the number of rooms:  
MapGenerator::noOfRooms //Min 1  
With the i5-9400f, it takes about 17 seconds to generate 10,000 rooms.
- Always set the MapGenerator::moveRandomRoom value less than MapGenerator::roomSizeFrom


## Controls
- WSAD - movement
- Q & E - zooming
- Space - generate new map
- ESC - exit

## Sample Maps:
- RoomSizeFrom: 450
- roomSizeTo: 900
- distanceBetween: 100
- moveRandomRoom: 100
- noOfRooms: 250
![Photo](https://github.com/Clwmm/ProceduralMapGenerator/blob/master/Procedural%20Map%20Generator/res/450%3B900%3B100%3B100%3B250.png)