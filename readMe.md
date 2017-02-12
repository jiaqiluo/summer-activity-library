#Programming
##Problem Statement:

It is time to start planning for Summer break. Have you decided what you are going to do? Are you going to work, take classes, or both? Do you intend to take advantage of the great weather we can have in the summer and all of the local activities? We are well known for our hiking trails and being bicycle friendly. Or do you water ski, wind surf or scuba dive? It can be all very overwhelming and within a blink of the eye, summer will be gone. Therefore, you have decided to write a program to help organize what great offerings Oregon has available so that when the weather is good you can do a quick search to find out what is available close by on short notice. This application is well suited for hashing, because I am not concerned about getting a sorted list. Instead, I want to quickly determine what activities are available *without the need for a sequential search*!

You will be working with the following information concerning local Oregon activities:

1. Activities name (e.g., wind surfing)
2. A description of the activity
3. The location where the activity takes place
4. Difficulty rating of the activity (1 – no prior knowledge, 5 – requires training or certification)
5. Does the activity require gear? (e.g., walking doesn’t, wind surfing absolutely does!)
6. You may add other information that is interesting for you.

##Data Structures: 

Write a C++ program that implements and uses a **table abstract data type using a hash table (with chaining)** to load from a file, retrieve, display, and remove (a section) information about activities. We would like to search by (a) Location. Extra credit will be given for people who also build a hash table for searching for a specific activity (by name).

What does retrieve need to do? It should take the location and supply back to the calling routine information about the details about all of the activities that can be performed at that location. Retrieve, since it is an ADT operation, should not correspond with the user (i.e., it should not prompt, echo, input, or output data).

Evaluate the performance of storing and retrieving items from this table. Monitor the number of collisions that occur for a given set of data that you select. Make sure your hash table’s size is a prime number. Try different table sizes, and evaluate the performance (i.e., the length of the chains!). Your design writeup must discuss what you have discovered.

In summary, the required functions for your **TABLE ADT** are:

1. **Constructor**
2. **Destructor**
3. **Load information about the activities offered** (you should use external data files)
4. **Retrieve** (based on location)
5. **Display** (based on location)
6. **Display all**
7. **Remove** (based on location)
