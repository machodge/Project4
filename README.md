Project 04: Path Finding
========================

Authors:
David Hu
Nicholas Hodge

This project implements a [Dijkstra's Algorithm] to perform rudimentary path
finding on a 2D tile-based map.

[Dijkstra's Algorithm]: https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm


Input
-----

    TILES_N
    TILE_NAME_0	TILE_COST_0
    ...
    TILE_NAME_N-1	TILE_COST_N-1

    MAP_ROWS MAP_COLUMNS
    TILE_0_0    ...
    ...

    TRAVELER_START_ROW TRAVELER_START_COL
    TRAVELER_END_ROW   TRAVELER_END_COL

Output
------

    Cost
    [(ROW_0, COL_0), ...]

Markdown Table
---------------

| N             | Elapsed Time  | Memory Usage   |
|---------------|---------------|----------------|
| 10            | ...           | ...            |
| 20            | ...           | ...            |
| 50            | ...           | ...            |
| 100           | ...           | ...            |
| 200           | ...           | ...            |
| 500           | ...           | ...            |
| 1000          | ...           | ...            |
|---------------|---------------|----------------|

Question #1
-----------------------------------------
How did you represent the map as a graph?
-----------------------------------------



Question #2
----------------------------------------------------------------------
What is the complexity of your implementation of Dijkstra's Algorithm?
----------------------------------------------------------------------



Question #3
----------------------------------------
How well does your implementation scale?
----------------------------------------


Contributions
-------------

David Hu
--------
Wrote and debugged djikstras

Nicholas Hodge
--------------
Created generate_map, updated the makefile to include generate_map, and helped debug djikstras 
