
'''
 What is the probability of getting heads more than 4 times 
if you flip a coin 6 times having 0.6 as the probability of 
heads?
'''

#The stats submodule of the scipy module does numerous calculations in probability
from scipy import stats 
import matplotlib.pyplot as plot
#The function stats.binom.pmf takes three arguments:  k,n and p
k=[1,2,3,4,5,6]
prob_success=0.6
num_trail=6

binomial_prob=stats.binom.pmf(k,num_trail,prob_success)
print("Prob_heads more than 4 times =",binomial_prob)
plot.bar(k, binomial_prob)
plot.show()



