This is the Graph data structure project

Below is the introduction to Graph


//some real-life applications
- Graph data structures can be used to represent the interactions between players on a team, such as passes, shots, and tackles.
Analyzing these interactions can provide insights into team dynamics and areas for improvement.

-Commonly used to represent social networks, such as networks of friends on social media.

-Graphs can be used to represent the topology of computer networks, such as the connections between routers and switches.

- Graphs are used to represent the connections between different places in a transportation network, such as roads and airports.

-Neural Networks: Vertices represent neurons and edges represent the synapses between them. Neural networks are used to understand how our brain works and how connections change when we learn.
The human brain has about 10^11 neurons and close to 10^15 synapses.

-Compilers: Graphs are used extensively in compilers. They can be used for type inference, for so-called data flow analysis, register allocation, and many other purposes.
They are also used in specialized compilers, such as query optimization in database languages.

-Robot planning: Vertices represent states the robot can be in and the edges the possible transitions between the states. Such graph plans are used, for example, in planning paths for autonomous vehicles.
There is a variety solution to solve this problem

//Basic Concept
-Graphs are data structures used to represent "connections" between pairs of elements.

-These elements are called nodes. They represent real-life objects, persons, or entities. 

-The connections between nodes are called edges.

// Types of Graphs
Graphs can be:

-Undirected: if for every pair of connected nodes, you can go from one node to the other in both directions.

-Directed: if for every pair of connected nodes, you can only go from one node to another in a specific direction.
We use arrows instead of simple lines to represent directed edges.

//Representation of Graphs
There are two ways to store a graph:

Adjacency Matrix 
Adjacency List ( In this project we only use Adjacency Matrix)

