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
| 10            | 00.0030       | 00010400       |
| 20            | 00.0032       | 00037280       |
| 50            | 00.0078       | 00211160       |
| 100           | 00.0320       | 00824480       |
| 200           | 00.2060       | 03233480       |
| 500           | 02.9066       | 20012360       |
| 1000          | 25.0504       | 80024360       |
|---------------|---------------|----------------|

Memory found by taking the "mem_heap_B" in the "heap_tree=peak" in the massif file, as was recommend on piazza:
https://piazza.com/class/k4r8tgsigni3a4?cid=145


Nicholas Hodge
--------------
Created generate_map, updated the makefile to include generate_map, ran time and memory tests, and helped debug djikstras 
