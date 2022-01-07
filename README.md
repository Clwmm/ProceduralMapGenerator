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
- ESC - exit
