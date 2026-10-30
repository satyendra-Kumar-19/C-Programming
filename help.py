import os

for i in range(1, 19):
    folder_name = f"Chapter-{i}"

    # Create folder
    os.makedirs(folder_name, exist_ok=True)

    # Create txt file with same name as folder
    file_path = os.path.join(folder_name, f"{folder_name}.txt")

    with open(file_path, "w") as file:
        file.write("")

print("Folders and text files created successfully!")