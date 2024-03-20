### Problem 18
The IIIT students’ Hall Management Center (HMC) has requested us to develop the following software to automate various book-keeping activities associated with its day to day operations:

 • After a student takes admission, he/she presents a note from the admission unit, along with his/her name, permanent address, contact telephone number, and a photograph. He/she is then allotted a hall, and also a specific room number. A letter indicating this allotted room is issued to the concerned student.
 
• Students incur mess charges every month. The mess manager would input to the software the total charges for each student in a month on mess account.

• Each room has a fixed room rent. The newly constructed halls have higher rent compared to some of the older halls. Twin sharing rooms have lower rent. 

• Each hall provides certain amenities to the students such as reading rooms, play rooms, TV room, etc. A fixed amount is levied on each student on this count. 

• The total amount collected from each student of a hall towards mess charges is handed over to the mess manager every month. For this, the computer needs to print a sheet with the total amount due to each mess manager is printed. Printed cheques are issued to each manager and signatures are obtained from them on the sheet.

• Whenever a student comes to pay his dues, his total due is computed as the sum of mess charge, amenity charge, and room rent. 

 • The students should be able to raise various types of complaints using a web browser in their room or in the Lab. The complaints can be repair requests such as fused lights, non-functional water taps, nonfunctional water filters, room repair, etc. They can also register complaints regarding the behaviour of attendants, mess staff, etc. For this, round-the-clock operation of the software is required and downtime should be negligible. Considering that about 10,000 students live in hostels, the response time of the web site should be acceptable even under 1000 simultaneous clicks. 
 
 • The HMC receives an annual grant from the Institute for staff salary and the upkeep of the halls and gardens. The HMC chairman should be provided support for distribution of the grant among the different halls. The Wardens of different halls should be able to enter their expenditure details against the allocations. 
 
 • The controlling warden should be able to view the overall room occupancy.
 
  • The warden of each hall should be able to find out the occupancy of his hall. He should also be able to view the complaints raised by the students and post his Action Taken Report (ATR) to each complaint. 
  
  • The halls employ attendants and gardeners. These temporary employees receive a fixed pay on a per day basis. The Hall clerk enters any leave taken by an attendant or a gardener from at the terminal located at the hall office. At the end of every month a consolidated list of salary payable to each employee of the hall along with cheques for each employee is printed out. 
  
  • The HMC incurs petty expenses such as repair works carried out, news paper and magazine subscriptions, etc. It should be possible to enter these expenses. 
  
  • Whenever a new staff is recruited his details including his daily pay is entered. Whenever a staff leaves, it should be possible to delete his records. 
  
  • The warden should be able to view the statement of accounts any time. The warden would take a print out of the annual consolidated statement of accounts, sign and submit it to the Institute administration for approval and audit verification. The software should be very secure to prevent the possibility of various types of frauds and financial irregularities.
  
## Submission 1

**1. Introduction**

1.1 Purpose of the requirements document

1.2 Scope of the product

1.3 Definitions, acronyms and abbreviations

1.4 References

1.5 Overview of the remainder of the document

**2. General description**

2.1 Product perspective

2.2 Product functions

2.3 User characteristics

2.4 General constraints

2.5 Assumptions and dependencies

**3.Specific requirements, covering functional, non-functional and interface requirements.**

This is obviously the most substantial part of the document but because of the wide variability in
organisational practice, it is not appropriate to define a standard structure for this section. The
requirements may document external interfaces, describe system functionality and performance, and
specify logical database requirements, design constraints, emergent system properties and quality
characteristics.

**4.Appendices**


____



1. Student Admission and Room Allotment:
	1. Capture and store student information including name, permanent address, contact details, and photograph.
	    
	2. Allocate halls and specific room numbers to admitted students.
	    
	3. Generate and issue admission-related letters indicating allotted rooms.
    

3. Mess Management:
	1. Allow the mess manager to input monthly charges for each student.
	    
	2. Generate a monthly sheet detailing the total mess charges due for each mess manager.
	    
	3. Print cheques for mess managers and obtain their signatures on the sheet.
    

5. Room Rent and Amenity Charges:   
	1. Implement a system for fixed room rent for each room and varied rents for different hall categories.
	    
	2. Levy charges on amenities provided and collect amounts from each student.

7. Complaints Management:
	1. Enable students to raise complaints via a web browser for various issues, including repairs and staff behavior.
	    
	2. Ensure 24/7 operation with minimal downtime.
	    
	3. Accommodate simultaneous usage by a large student population.
    

9. Financial Grant Distribution:
	1. Support the HMC chairman in distributing the annual grant among different halls.
	    
	2. Allow wardens to enter expenditure details against allocations.
    

11. Occupancy Tracking:
	1. Provide the controlling warden with an overview of overall room occupancy.
	    
	2. Allow individual hall wardens to view the occupancy status of their respective halls.
	    

13. Complaint Resolution:

	1. Enable hall wardens to view student complaints and submit Action Taken Reports (ATR) for each complaint.
    

15. Personnel Management:

	1. Allow hall clerks to enter leaves taken by attendants and gardeners.
	    
	2. Generate a consolidated list of salary payable to temporary employees at the end of every month.
    

17. Expense Recording:

	1. Enable the entry of petty expenses such as repair works and subscriptions.
	    
	2. Facilitate the addition and deletion of staff records, including daily pay details.
	    

19. Financial Reporting:
	1. Allow wardens to view statements of accounts at any time.
	    
	2. Generate an annual consolidated statement of accounts for submission to the Institute administration.
    

21. Security and Fraud Prevention:

	1. Implement robust security measures to prevent various types of frauds and financial irregularities.

----

1. **System Components:**
    
    - Represent each major component mentioned in your document as a box or a circle. This could include components such as "Student Admission and Room Allotment," "Mess Management," "Complaints Management," "Financial Grant Distribution," etc.
2. **User Roles:**
    
    - Represent the different user roles as distinct entities. For example, "Wardens," "Mess Managers," "Students," "HMC Chairman," etc.
3. **External Systems:**
    
    - If there are external systems mentioned in your document that need to integrate with the Hall Management System, represent them in the diagram.
4. **Interfaces:**
    
    - Show the interfaces between the system components, user roles, and external systems. This could include arrows indicating data flow, communication channels, or interactions between different elements.
5. **Data Flow:**
    
    - Illustrate the flow of data between different components. For instance, you can show how student information flows from the Admission Unit to the Student Admission and Room Allotment component, or how financial data is exchanged between the HMC Chairman and the Financial Grant Distribution component.
6. **Security Measures:**
    
    - Represent the security measures, access controls, and audit trails mentioned in the document. This could include arrows indicating the enforcement of security measures between different components and user roles.
7. **Constraints:**
    
    - If there are significant constraints mentioned in your document (e.g., budgetary limitations, legacy system integration), consider representing them in the diagram with relevant annotations.
8. **Dependencies:**
    
    - Illustrate dependencies between different components or external systems. For example, arrows showing that certain functionalities are dependent on the integration with existing systems.
9. **Non-functional Requirements:**
    
    - If possible, visually represent the non-functional requirements such as performance, security, usability, etc., to highlight their importance in the overall system architecture.

----

### Project: IIIT Hall Management System Development

#### Task 1: Student Admission and Room Allotment

- Subtask 1.1: Capture and Store Student Information
- Subtask 1.2: Allocate Halls and Room Numbers (Dependent on Subtask 1.1)
- Subtask 1.3: Generate Admission-Related Letters (Dependent on Subtask 1.2)

#### Task 2: Mess Management

- Subtask 2.1: Input Monthly Charges for Each Student
- Subtask 2.2: Generate Total Mess Charges Due (Dependent on Subtask 2.1)
- Subtask 2.3: Print Cheques for Mess Managers (Dependent on Subtask 2.2)

#### Task 3: Room Rent and Amenity Charges

- Subtask 3.1: Define Fixed Room Rent for Each Room
- Subtask 3.2: Calculate and Track Room Rents for Each Student (Dependent on Subtask 3.1)
- Subtask 3.3: Levy Charges on Amenities Provided (Dependent on Subtask 3.2)

#### Task 4: Complaints Management

- Subtask 4.1: Enable Students to Raise Complaints via Web Browser
- Subtask 4.2: Categorize Complaints (e.g., Repairs, Staff Behavior) (Dependent on Subtask 4.1)
- Subtask 4.3: Allow Wardens to View and Respond to Complaints (Dependent on Subtask 4.2)

#### Task 5: Financial Grant Distribution

- Subtask 5.1: Support HMC Chairman in Annual Grant Distribution
- Subtask 5.2: Allow Wardens to Enter Expenditure Details (Dependent on Subtask 5.1)

#### Task 6: Occupancy Tracking

- Subtask 6.1: Provide Controlling Warden Overview of Overall Room Occupancy
- Subtask 6.2: Allow Individual Hall Wardens to View Occupancy Status (Dependent on Subtask 6.1)

#### Task 7: Complaint Resolution

- Subtask 7.1: Enable Hall Wardens to View Student Complaints
- Subtask 7.2: Submit Action Taken Reports (ATR) for Each Complaint (Dependent on Subtask 7.1)

#### Task 8: Personnel Management

- Subtask 8.1: Allow Hall Clerks to Enter Leaves Taken by Attendants and Gardeners
- Subtask 8.2: Generate Consolidated List of Salary Payable to Temporary Employees (Dependent on Subtask 8.1)

#### Task 9: Expense Recording

- Subtask 9.1: Enable Entry of Petty Expenses (e.g., Repair Works, Subscriptions)
- Subtask 9.2: Facilitate Addition and Deletion of Staff Records (Dependent on Subtask 9.1)

#### Task 10: Financial Reporting

- Subtask 10.1: Allow Wardens to View Statements of Accounts at Any Time
- Subtask 10.2: Generate Annual Consolidated Statement of Accounts for Submission (Dependent on Subtask 10.1)

#### Task 11: Security and Fraud Prevention

- Subtask 11.1: Implement Robust Security Measures
- Subtask 11.2: Ensure Access Controls and Audit Trails (Dependent on Subtask 11.1)

### General Tasks:

- Task 12: User Interface Design
- Task 13: System Testing and Refinement (Dependent on Task 12)
- Task 14: User Training Materials Preparation (Dependent on Task 13)
- Task 15: Integration with Existing Systems
- Task 16: Infrastructure Scalability Assessment (Dependent on Task 15)
- Task 17: Regulatory Compliance Check (Dependent on Task 16)

### General Constraints and Assumptions:

- Task 18: Budgetary Limitations Assessment
- Task 19: Legacy System Integration Analysis (Dependent on Task 18)
- Task 20: Regulatory Compliance Review (Dependent on Task 19)
- Task 21: User Training Plan Development (Dependent on Task 20)

### Non-functional Requirements:

- Task 22: Performance Testing
- Task 23: Security Implementation (Dependent on Task 22)
- Task 24: Usability Assessment (Dependent on Task 23)
- Task 25: Reliability Testing (Dependent on Task 24)
- Task 26: Maintainability Evaluation (Dependent on Task 25)
- Task 27: Compatibility Testing (Dependent on Task 26)
- Task 28: Scalability Testing (Dependent on Task 27)
- Task 29: Interoperability Assessment (Dependent on Task 28)
- Task 30: Compliance Review (Dependent on Task 29)

### Interface Requirements:

- Task 31: 24/7 Operation Evaluation
- Task 32: Responsive Interaction Testing (Dependent on Task 31)
- Task 33: Scalable Design Assessment (Dependent on Task 32)
- Task 34: Cross-Device Compatibility Check (Dependent on Task 33)
- Task 35: Intuitive Navigation Design (Dependent on Task 34)
- Task 36: Accessibility Standards Compliance Review (Dependent on Task 35)