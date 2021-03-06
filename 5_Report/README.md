# Identifying features #
The project titled Billing Management System using C manages the billing records using file system. This system helps to login in using admin credentials, if admin credentilas are found to be correct then it proccedes to  the next screen.  The basic features that an billing system has to provide are
* ability to add new items or delete existing items
* add the goods on the bill and calculate the grand total by adding GST and discount
* at times provide flexibilty to change the password
* facility to store and view previous bill records
* simple database maintained to show total revenue earned which can help to pay tax
* reduce cost
* reduce time

 # State of art/research #
Invoicing and billing application for different business purposes helps mainly the serviceproviders and freelancers to manage, send professional invoices online, and track its status.Generally, all the small companies in Saudi Arabia facing a various issues for managingand tracking the invoice status of customers, which mostly back to the lacks of adaptingnew technology in these companies. One of these lacks is tracking the bills status for adetinite projects'. Therefore, this research intends to design and develop an online billingand invoice management system to expenses effortlessly and saves both time and money onthe employees in the Saudi small companies (Sepco Company). The propose system intendto provide a digital tracking of the time spend on projects and send invoices directly toclients. An evaluation was conducted among 30 employees and business administrators atSepco Company to perceive their opinion towards the system ease of use, usefulness, andsatisfaction. The result revealed that the proposed system gained a satisfactory level among the participants.

# 4W's  1 H #
### Who: ### 
in any groccerys shop starting from small vendors in small markets and scalling  upto malls. And can be used by any organistion righ from public,private and coporate where there is need to generate the bill.

###  What: ### 
instead of using traditional method for storing data in handwritten form where consumes lot of time and space,  which makes the workflow clumsy this system comes into aid  to reduce thier efforts and save time as well.

###  When: ### 
everyday, internet is changing our lives, so with the changing generation everything should be digitalized.

###  Where: ### 
wherever each transaction is acknowledged by an bill

###  How: ### 
Store owners or organisation heads will be able to store data into their private systems which is protected from unauthorised access and rest of the process is digitalised.

# SWOT #
 ### STRENGTHS ###
 A easy and user friendly product reduces human involment and reduces the constraint of space and storage. Plus easy benifts to search and retrive the files.
 
 ### Weakness ###
 Currently the application is static and there room for addition of plenty of other new featuers
 
 ### Oppurtunities ###
 Can help small to big vendors effictively store records to improve their service. And using this it easy for them to generate proofs for tax they have to pay.
 
 ### Risk ###
Various competatiors in market. Competitors have superior access to channels of distribution

#  Detail requirements 
###  High Level Requirements: ### 
 LR_ID | Description
 ------ | -------------------------------------------------------------------
HR_01 | To write c program for multiplatform
HR_02 | To authorise login
HR_03 | To  add new products and its price
HR_04 | To check revenue
HR_05 | To compute the bill for each customer

### Low Level Requirements: ### 
HR_ID | LR_ID | Description
-------| ------ | -------------------------------------------------------------------
HR_01 | LR_01 | The application should be able to execute in any of the operating system.
HR_01 | LR_02 | compile the program with gcc
HR_01 | LR_03 | Generate corrosponding build file
HR_02 | LR_04  | Protect the system with the help of password
HR_02 | LR_04 | Maintain login credentials in a file named admin
HR_03 | LR_07 | Maintain a file that contains product and its price
HR_03 | LR_08  | Enable adding new items to this file
HR_03 | LR_09  | Check the product if its already added
HR_04 | LR_10 | Generate a file to hold the total sum from all transactions
HR_04  | LR_11 | At each stage add the grand total to this file
HR_05 | LR_12 | Add date to the bill
HR_05 | LR_13 | Allow addition of items from the stocks file
HR_05 | LR_14 | Calculate grand total along with GST
HR_05 | LR_15 | Print the result on to the screen
HR_05 | LR_15 | Store the result on to a file

# Structural Diagrams #
### Low level ###
 ![Er_diadgram](https://github.com/PranithAlva/M1_BillingSystem/blob/main/images/er.png)
### High Level ### 
 ![Component_diagram](https://github.com/PranithAlva/M1_BillingSystem/blob/main/images/component.png)

# Behavioural Diagrams #
### Low Level ###
![use_case](https://github.com/PranithAlva/M1_BillingSystem/blob/main/images/sequence.png)
### High Level ###
 ![Flowchart](https://github.com/PranithAlva/M1_BillingSystem/blob/main/images/flowchart.png)


# Steps for execution #
-  Enter the following id which is admin_256(can be changed as option is provided)
- Enter the choices as displayed on the screen
	1. -> for adding goods
	2. -> for changing password
	3. -> checking revenue
	4. -> billing
- for option 1 you will be invoke to add the product along with its price
- for option 2 you will be asked to verify existing password
- for option 3 you will be displayed the result onto the screen
- for option 4 you will be invoked at first
	1. to add product name
	2. if it exists it will be displayed
	3. you will be asked to bill or to continue adding products
	4. on billing grand total will be displayed
- you will be again asked if you want to continue with the system

# Test Plan #
### High level tesl plan ###
Test_ID | Description | Ex I/p | Ex O/P | Actual output | Type of test
------- | ----------- | ------ | ------ | ---------- | ------------
H_01    |  Test the basic functionality |     Valid I/p      | valid o/p | valid o/p | manual
H_02    |  Check if file path is wrong |  cwrong path | ERROR | ERROR | manual
H_03    |  check for boundary conditions |     valid i/p       | valid o/p | valid o/p | technical

### Low  level test plan ###
Test_ID | Description | Ex I/p | Ex O/P | Actual output | Type of test
------- | ----------- | ------ | ------ | ---------- | ------------
L_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
L_02    |  Test the discount is 0 if grand total is greater than 100 and less than 500 |     n>=100 && n<500     | 0.1 | 0.1 | Scenario based unit testing
L_03    |  Test the discount is 0 if grand total is less than 1000 and greater than 500 |     n>=500 && n<1000       | 0.2 | 0.2 | Scenario based unit testing
L_04    |  Test the discount is 0 if grand tota is greater than 1000 and less than 1500 |     n<1500  && n>=1000     | 0.32 | 0.32 | Scenario based unit testing
L_05    |  Test the discount is 0 if grand total is greater than 2000 |     n>=2000      | 0.45 | 0.45 | Scenario based unit testing
L_06    |  Test gst added is 100 |    1000      | 100 | 100 | Scenario based unit testing
L_07    |  Test gst added is 100 |    50000.90  | 100 | 100 | Scenario based unit testing
L_08    |  Test gst added is 100 |    67900.999 | 100 | 100 | Scenario based unit testing
L_09    |  Test gst added is 20% | 100   | 20 | 20 | Scenario based unit testing
L_10    |  Test gst added is 20% | 200  | 20 | 20 | Scenario based unit testing
L_11    |  Test gst added is 20% |  124 | 20 | 20 | Scenario based unit testing
L_12    |  Test option 1 is working properly | 1 | 1 | 0 | Scenario based unit testing
L_13    |  Test option 2 is working properly | 2 | 2 | 0 | Scenario based unit testing
L_14    |  Test option 3 is working properly | 3  | 3 | 0 | Scenario based unit testing
L_15    |  Test option 4 is working properly | 4 | 3 | 0 | Scenario based unit testing
L_16    |  Test option 0 is inavlid | 0 | 0 | 0 | Scenario based unit testing
L_17    |  Test option -ve is invalid | -ve number | 0 | 0 | Scenario based unit testing
L_18    |  Test option out greater than 4 is invalid | n>4 | 0 | 0 | Scenario based unit testing


