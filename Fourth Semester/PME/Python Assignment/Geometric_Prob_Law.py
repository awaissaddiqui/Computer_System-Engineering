'''
 What is the probability that the coin has to be flipped i) 4 
times ii) more than 4 times, for getting heads for the first 
time? The probability of heads is 0.6 and the probability of 
tails is 0.4.
'''
from scipy.stats import geom

k1=4
prob_head_success=0.6
prob_tail_failer=0.4

result=geom.pmf(k1,prob_head_success,loc=0)
coin_flip_more_4=pow(prob_tail_failer,k1)
print(result)
print(coin_flip_more_4)

