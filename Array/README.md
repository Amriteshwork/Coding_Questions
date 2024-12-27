flowchart TD
    A[User Interface - Streamlit] --> B[Data Processing Layer]
    B --> C[NewsData.io API]
    C --> B
    B --> D[Data Storage - Pandas]
    D --> E[Visualization - Plotly]
    E --> A
    
    subgraph Frontend
        A
        E
    end
    
    subgraph Backend
        B
        D
    end
    
    subgraph External
        C
    end
