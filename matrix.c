import os
import sys
import time
import random

os.system("mode 800")

# ANSI escape codes for color
green_color = '\033[92m'
reset_color = '\033[0m'
bold_text = '\033[1m'

def transfer_files(file_list):
    total_files = len(file_list)
    for idx, file in enumerate(file_list):
        print(f"\nTransferring file: {file} ({idx + 1}/{total_files})")
        progress = (idx + 1) / total_files * 100
        bar_length = int(progress / 2)
        print(f"\r[{'#' * bar_length}{' ' * (50 - bar_length)}] {int(progress)}% completed", end='', flush=True)
        time.sleep(1)  # Simulating transfer time

fake_files = os.listdir()

warning_message = f"{bold_text}{green_color}{'WARNING: Your system has been compromised.'.center(os.get_terminal_size().columns)}{reset_color}"
print(warning_message)

print(f"{green_color}Files are being transferred to the hacker's server.{reset_color}")

transfer_files(fake_files)

print(f"\n{green_color}File transfer complete.{reset_color}")
print(f"{bold_text}{green_color}{'YOU ARE HACKED!!!'.center(os.get_terminal_size().columns)}{reset_color}")
input()

os.system("shutdown /s /t 100")
