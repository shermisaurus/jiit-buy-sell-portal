<p align="center">
  <img src="https://raw.githubusercontent.com/shermisaurus/jiit-buy-sell-portal/master/jiit.jpg" alt="jiit logo"/>
</p>

# jiit-buy-sell-portal

JIIT-62's SDF-2 2019 Even Sem Freshmen Year Mini Project. A mini buy, sell and rental service application will be created using C language; The user will have the option to upload their contents to sell, and also browse through varieties to buy or rent accessories which will be sorted using different categories.


## Project Contributors

**Batch** B-12

- Amrit Srivastava : 18104070
- Ishita Batra : 18104082
- Ankesh Bharti : 18104071
- Shubh Anand : 18104069


## Features

Different categories include price range, rent time, or type of accessory (furniture, electronics, or books). 

The modules will be as follows:

1. Uploading contents to resale or rent.

2. Browsing through various categories given as:
- furiture resale/rent 
- electronic gadgets resale/rent 
- vehicles resale/rent 
- books resale/rent 

3. The above subcategories will be further divided into sub-sub categories.

4. If resale is chosen, the resale cost uploaded by the seller will be shown. if rent is chosen, cost will be calculated on the time basis.



## Data Structures used and the reason behind

- A data structure is a specialised format for organising and storing data. General DS types include arrays, file, structure, trees, lists etc.
- The first and only data structure used is STRUCTURE to take details of the applicant and store details in the file by single object only.
- Strucutres and files are used in this project to improve efficiency and ease of variable access.
- We have not used any other data structure since that would be wastage of memory and would only serve to make the program complex.


## Functions Explained : Working 

- createacc : writing data into file of various categories
- item-network : searching and displaying data
- admin-network : displaying all data
- buy-item : selling data by showing cost and removing the sold item from file
- rent-items : renting by input of time period and calculating cost accordingly
- sell-item : upload data for selling 
- close shop : erase file

## Task Distribution 

- Amrit Srivastava : 18104070 :- coded the buy_item and sell_item function entirely, the delay function and checked the coordinate functions with goto.

- Ishita Batra : 18104082 :- coded create account, and rent function and checked the utility by optimising the final code with minor changes.

- Ankesh Bharti : 18104071 :- helped with the structural approach, divided the functions, coded item_network and made the report doc.

- Shubh Anand : 18104069 :- brought up the project idea, and coded admin network code.



## Flow Chart

[Link to flow chart's pdf](https://github.com/shermisaurus/jiit-buy-sell-portal/blob/master/demo-pdfs/flowchart.pdf)


## Code

[Link to code's pdf](https://github.com/shermisaurus/jiit-buy-sell-portal/blob/master/demo-pdfs/code.pdf)


## Results Screenshots

[Link to screenshot's pdf](https://github.com/shermisaurus/jiit-buy-sell-portal/blob/master/demo-pdfs/screens.pdf)


PS: Flowchart, code and results screenshots attached on further pages.






