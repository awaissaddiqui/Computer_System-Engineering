#A coin is thrown 3 times .what is the probability that atleast one head is obtained?
sample_space=["HHH","HHT","HTH","THH","TTH","THT","HTT","TTT"]
size_of_sample_space=len(sample_space)


probability_no_head = 1 / size_of_sample_space

# Calculate the probability of at least one head
probability_of_Atleast_one_head = 1 - probability_no_head
print("S= ",sample_space)
print("Size of sample space is : ",size_of_sample_space)
print("Probability of at least one head:", probability_of_Atleast_one_head)
