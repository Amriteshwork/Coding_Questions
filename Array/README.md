```mermaid
flowchart TB
    UI[Streamlit UI Layer]
    API[NewsData.io API]
    Process[Data Processing Layer]
    Viz[Visualization Layer]
    Store[Data Storage]
    
    UI --> |User Input| Process
    Process --> |API Request| API
    API --> |JSON Response| Process
    Process --> |Pandas DataFrame| Store
    Store --> |Processed Data| Viz
    Viz --> |Interactive Charts| UI
    
    subgraph Frontend
        UI
        Viz
    end
    
    subgraph Backend
        Process
        Store
    end
    
    subgraph External
        API
    end
```
