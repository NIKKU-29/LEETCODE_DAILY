LINK TO QUESTION : [https://leetcode.com/problems/average-waiting-time/solutions/5446218/beats-99-12-o-n-time-and-o-1-space/?envType=daily-question&envId=2024-07-09]

Intuition and Approach
The main idea is to simulate the serving process and calculate the waiting time for each customer.

Initialization:

Start by serving the first customer immediately when they arrive. So, we set the initial waiting time sum to the first customer's preparation time.
Set the time to when the first customer finishes their meal, which is the sum of their arrival and preparation times.
Iterate Through Customers:

For each subsequent customer:
If the current time (time) is greater than or equal to the customer's arrival time (customers[i][0]), it means the chef is still busy when the customer arrives. The customer waits, and we add the preparation time to the current time and update the waiting time.
If the current time is less than the customer's arrival time, it means the customer arrives when the chef is free. The chef starts preparing their meal immediately, so we set the current time to their arrival time plus their preparation time.
Calculate Average Waiting Time:

Once all customers have been served, we calculate the average waiting time by dividing the total waiting time (sum) by the number of customers.
Time Complexity
The time complexity of this approach is (O(n)), where (n) is the number of customers. This is because we iterate through the list of customers exactly once, performing constant time operations for each customer.

Space Complexity
The space complexity is (O(1)), assuming the input list customers does not count towards the space complexity since it is given as input. The function uses only a fixed amount of additional space to store variables like sum and time.