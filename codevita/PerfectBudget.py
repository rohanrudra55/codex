def minimum_perfect_budget(n, projects):
    projects.sort(key=lambda x: x[1] - x[2])  # Sort projects by (completion bonus - reward/penalty)

    budget = 0
    remaining_budget = 0

    for project in projects:
        expenditure, completion_bonus, reward_penalty = project
        remaining_budget += expenditure

        # If the bonus is greater than or equal to the penalty, consider the project
        if completion_bonus >= reward_penalty:
            budget += expenditure
        # Otherwise, exclude the project from the budget calculation
        else:
            remaining_budget -= expenditure

        # Update budget and remaining budget based on the current project
        if remaining_budget >= 0:
            budget += max(0, expenditure - remaining_budget)
            remaining_budget = max(0, remaining_budget - expenditure)

    return budget

# Input
n = int(input())
projects_data = []
for _ in range(n):
    expenditure, completion_bonus, reward_penalty = input().split()
    expenditure = int(expenditure)
    completion_bonus = int(completion_bonus)
    reward_penalty = int(reward_penalty)
    projects_data.append((expenditure, completion_bonus, reward_penalty))

# Calculate the minimum perfect budget for the given projects
result = minimum_perfect_budget(n, projects_data)
print(result)
