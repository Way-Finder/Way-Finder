# Way Finder

## 📖 Introduction  
**Way Finder** is a program designed to assist travelers and tourists in exploring a new country while staying within budget constraints. The program represents a transportation network as a graph and provides various features to help users navigate efficiently while considering costs.  

## 🚀 Features  

### 🔍 Graph Traversal  
- Allows traversal using **Breadth First Search (BFS)** or **Depth First Search (DFS)** algorithms.  
- Users input the starting city and select their preferred traversal algorithm.  

### ✏️ Modify Transportation  
- **Update**: Modify existing transportation details.  
- **Add**: Add new transportation options.  
- **Delete**: Remove existing transportation options (ensuring the graph remains connected).  

### ✅ Graph Completeness Check  
- Determines whether the transportation network is **complete** (each city is connected to every other city).  

### 🛣️ Display Available Transportation Options  
- Users input **source city**, **destination city**, and **budget**.  
- The program lists all available transportation options within the given budget, sorted by cost.  

## 📥 Input/Output Scenarios  

### 📂 1. Reading Data from a File  
- The program starts by reading transportation data from a file (if it exists).  
- The data is structured into an adjacency map for efficient graph representation.  

### 🔄 2. Traversing the Map  
- Users select a starting point and traverse using **BFS or DFS**.  

### 💰 3. Finding Transportation Within Budget  
- Users input their **current location**, **desired destination**, and **available budget**.  
- The program finds **all possible paths** between the cities that fit within the budget, sorting results by cost.  

### ✍️ 4. Modifying the Map  
- Users can **delete**, **edit**, or **add** transportation routes.  
- Deleting a transportation option is **restricted** if it would disconnect the graph.  

### 🔎 5. Checking Graph Completeness  
- After modifications, the program checks if the graph is **complete or not**.  

### 💾 6. Saving Data  
- Upon closing the program, the updated graph data is **saved back to the file** to persist changes.  

## 🛠️ Technologies Used  
- **Programming Language**: C++, C  
- **Graph Algorithms**: BFS, DFS  

