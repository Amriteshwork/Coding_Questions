# News Intelligence Dashboard Architecture

```mermaid
flowchart TB
    %% Define the main components
    UI[User Interface Layer\n[Streamlit]]
    API[External API Layer\n[NewsData.io]]
    Process[Data Processing Layer\n[Python/Pandas]]
    Viz[Visualization Layer\n[Plotly]]
    Store[Data Storage Layer\n[Pandas DataFrame]]
    
    %% Define the relationships and data flow
    UI -->|1. User Input\n[Keywords, Dates, Region]| Process
    Process -->|2. API Request| API
    API -->|3. JSON Response| Process
    Process -->|4. Structured Data| Store
    Store -->|5. Processed DataFrame| Viz
    Viz -->|6. Interactive Charts| UI
    
    %% Group related components
    subgraph Frontend["Frontend Layer"]
        direction TB
        UI
        Viz
    end
    
    subgraph Backend["Backend Processing"]
        direction TB
        Process
        Store
    end
    
    subgraph External["External Services"]
        API
    end

    %% Styling
    classDef default fill:#f9f9f9,stroke:#333,stroke-width:2px
    classDef frontend fill:#e6f3ff,stroke:#0066cc
    classDef backend fill:#f0f7e6,stroke:#339900
    classDef external fill:#fff0f0,stroke:#cc0000
    
    class UI,Viz frontend
    class Process,Store backend
    class API external
```

## Component Description

1. **User Interface Layer (Streamlit)**
   - Handles user interactions
   - Displays interactive dashboard
   - Manages input controls

2. **Data Processing Layer (Python/Pandas)**
   - Processes API requests
   - Handles data transformation
   - Manages error handling

3. **External API Layer (NewsData.io)**
   - Provides news data
   - Handles authentication
   - Returns JSON responses

4. **Data Storage Layer (Pandas DataFrame)**
   - Stores processed data
   - Enables quick data access
   - Facilitates analysis

5. **Visualization Layer (Plotly)**
   - Creates interactive charts
   - Generates insights
   - Renders visual components
