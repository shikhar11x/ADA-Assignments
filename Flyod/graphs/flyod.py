import matplotlib.pyplot as plt

input_sizes = [5, 10, 15]
updates_best = [0, 0, 0]
updates_avg = [11, 84, 225]
updates_worst = [0, 0, 0]
plt.figure(figsize=(10, 5))
plt.plot(input_sizes, updates_best, marker='o', linestyle='-', label='Best Case')
plt.plot(input_sizes, updates_avg, marker='s', linestyle='-', label='Average Case')
plt.plot(input_sizes, updates_worst, marker='^', linestyle='-', label='Worst Case')

plt.xlabel('Input Size (n)')
plt.ylabel('Number of Updates')
plt.title('Floyd-Warshall Algorithm – Updates Comparison')
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()
