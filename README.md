# HospitalQueue-Simulation
Simulate a hospital queue system in C++ using arrays - project modeling queue behavior.


## Overview
This project simulates a **hospital queue system** using **C++** and only the `iostream` library.  
Patients are served in **first-come, first-serve order**, demonstrating **queue modeling and simulation**.  

---

## Research Objective
- Model a hospital patient queue with name and severity attributes.
- Analyze the order of treatment and system behavior.
- Introduce simulation concepts relevant to operations research.

---

## Features
- Input patient names and severity levels (1 = mild, 5 = critical)  
- Display the order of patients being treated  
- Console-based, beginner-friendly  
- Can be extended for priority queues or multiple doctors  

---

## Example Input
Enter number of patients: 4
Enter patient name and severity (1-5) for patient 1: Ali 3
Enter patient name and severity (1-5) for patient 2: Sara 5
Enter patient name and severity (1-5) for patient 3: Omar 2
Enter patient name and severity (1-5) for patient 4: Ayesha 4

## Example Output
Serving Patients in Queue:
Patient: Ali | Severity: 3 -> Treated
Patient: Sara | Severity: 5 -> Treated
Patient: Omar | Severity: 2 -> Treated
Patient: Ayesha | Severity: 4 -> Treated


## How to Run
1. Clone the repository
2. Open `main.cpp` in any C++ compiler  
3. Compile and run  
4. Enter patient details as prompted  

---

## Future Work
- Implement **priority queues** based on severity  
- Include **arrival time and waiting time statistics**  
- Extend simulation for **multiple doctors and departments**  
- Track and analyze patient flow for research insights  

---

## Author
Farwa Ch  
BS Computer Science, 4th Semester  
Skills: C++, HTML, CSS, Basic UX/UI Design
