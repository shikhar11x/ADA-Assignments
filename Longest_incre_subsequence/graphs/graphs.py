import matplotlib.pyplot as plt

capacities = [5, 10, 15, 20, 25]
worst_steps = [10, 45, 105, 190, 300]
average_steps = [5, 23, 44, 91, 151]
best_steps = [0, 0, 0, 0, 0]

plt.figure(figsize=(8, 5))
plt.plot(capacities, worst_steps, marker='o', linestyle='-', label="Worst Case Steps", color='r')
plt.plot(capacities, average_steps, marker='s', linestyle='--', label="Average Case Steps", color='g')
plt.plot(capacities, best_steps, marker='d', linestyle=':', label="Best Case Steps", color='b')

plt.xlabel("Capacity")
plt.ylabel("Steps Count")
plt.title("Steps Count vs Capacity in Different Cases")
plt.legend()
plt.grid(True)

plt.show()
