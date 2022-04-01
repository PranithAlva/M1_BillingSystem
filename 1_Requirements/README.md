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

#  Detail requirements 
###  High Level Requirements: ### 
HR_01 | To write c program for multiplatform

HR_02 | To authorise login

HR_03 | To  add new products and its price

HR_04 | To check revenue

HR_05 | To compute the bill for each customer

### Low Level Requirements: ### 
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

