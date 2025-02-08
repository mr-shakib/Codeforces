import requests
import os
import json
from git import Repo

# Your Codeforces handle
handle = "mr-shakib"

# Fetch submissions from Codeforces API
url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=1000"
response = requests.get(url)
data = response.json()

# Check if the API request was successful
if data['status'] != 'OK':
    print("Failed to fetch submissions from Codeforces API.")
    exit(1)

# Filter accepted submissions
accepted_submissions = [sub for sub in data['result'] if sub['verdict'] == 'OK']

# Save submissions to a JSON file
with open('submissions.json', 'w') as f:
    json.dump(accepted_submissions, f, indent=4)

print(f"Fetched {len(accepted_submissions)} accepted submissions.")

# Base directory for accepted solutions
base_dir = "accepted/codeforces"

# Create the base directory if it doesn't exist
os.makedirs(base_dir, exist_ok=True)

# Iterate over submissions and save them
for sub in accepted_submissions:
    contest_id = sub['problem']['contestId']
    problem_level = sub['problem']['index']
    solution_code = sub['programmingLanguage']
    solution_content = sub.get('source', '')  # Get the source code

    # Skip if source code is not available
    if not solution_content:
        print(f"Skipping submission for problem {contest_id}{problem_level}: Source code not available.")
        continue

    # Create the directory for the contest
    contest_dir = os.path.join(base_dir, str(contest_id))
    os.makedirs(contest_dir, exist_ok=True)

    # Save the solution file
    file_name = f"{problem_level}.{solution_code.lower()}"
    file_path = os.path.join(contest_dir, file_name)
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(solution_content)

    print(f"Saved solution for problem {contest_id}{problem_level} to {file_path}.")

print("Solutions have been organized into the directory structure.")

# Path to your local repository
repo_path = os.getcwd()

# Initialize the repository object
repo = Repo(repo_path)

# Check if the remote 'origin' exists
if 'origin' not in [remote.name for remote in repo.remotes]:
    print("Remote 'origin' is missing. Adding it now...")
    repo.create_remote('origin', url='git@github.com:mr-shakib/Codeforces.git')

# Add all changes
repo.git.add('--all')

# Commit the changes
try:
    repo.git.commit('-m', 'Update accepted solutions')
except Exception as e:
    print(f"Nothing to commit: {e}")

# Push to GitHub
origin = repo.remote(name='origin')
origin.push()

print("Changes have been pushed to GitHub.")