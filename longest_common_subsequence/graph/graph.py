import matplotlib.pyplot as plt  
input_sizes = [5, 10, 15, 20, 25]
steps = [25, 100, 225, 400, 625]
    
plt.plot(input_sizes, steps, marker='o', linestyle='-', color='b')
plt.xlabel('Input Size')
plt.ylabel('Step Count')
plt.title('LCS Step Count Analysis')
plt.grid()
plt.show()