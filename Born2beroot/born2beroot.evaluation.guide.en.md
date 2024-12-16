# Born2beroot Evaluation Guide

[Ler Guia em Português](born2beroot.evaluation.guide.pt.md)

This document outlines the evaluation criteria for the **Born2beroot Project**. Please follow the steps carefully to ensure a thorough and accurate evaluation.

---

## Preliminaries

1. **Cheating Policy**  
   If cheating is suspected, the evaluation stops immediately. Use the "Cheat" flag to report such cases. Please use this option judiciously.

---

## Preliminary Tests

1. The defense can only proceed if the student or group being evaluated is present. This encourages learning through knowledge sharing.
2. If no work is submitted, or the files are incorrect (wrong names, directories, etc.), the grade is **0**, and the evaluation ends.
3. Clone the Git repository of the project onto the evaluation station before proceeding.

---

## General Instructions

1. During the defense, the student being evaluated must assist you in verifying any required points.
2. Confirm that the `signature.txt` file is at the root of the cloned repository.
3. Compare the signature in `signature.txt` with that of the `.vdi` file using a simple `diff` command. If there are discrepancies or if the signatures cannot be verified, the evaluation stops.
4. To ensure safety, duplicate the initial virtual machine as a backup.
5. Start the virtual machine. If anything does not work as expected, the evaluation ends.

---

## Mandatory Part

### Project Overview

The student should explain:

- How virtual machines work.
- Their chosen operating system.
- The basic differences between Rocky and Debian.
- The purpose of virtual machines.

For Rocky:
- Explain **SELinux** and **DNF**.  
For Debian:
- Explain the difference between **aptitude** and **apt** and describe **APPArmor**.

Additionally:
- Ensure the script displays information every 10 minutes. Verify its functionality.  
- If explanations are unclear, the evaluation stops.

---

### Simple Setup

1. The machine must launch without a graphical environment.  
2. Ensure:
   - A password is required for user login.
   - Connection is established with a non-root user.
   - UFW and SSH services are active.
   - The chosen OS is either Debian or Rocky.

If something fails or is not properly explained, the evaluation stops.

---

### User Setup

1. Confirm:
   - A user with the evaluator’s login exists on the virtual machine.
   - The user belongs to the `sudo` and `user42` groups.

2. Test the password policy by:
   - Creating a new user with a password that follows the required rules.
   - Adding this user to a new group (`evaluating`).

3. The student must explain:
   - How the password policy is implemented.
   - The advantages and disadvantages of this policy.

---

### Hostname and Partitions

1. Verify:
   - The hostname follows the `login42` format.
   - The hostname can be updated and persists after a reboot.
2. Discuss partitions:
   - Compare the current setup with the project requirements.
   - The student should explain **LVM** functionality.

---

### SUDO

1. Check if `sudo` is installed and configured correctly.
2. Verify:
   - The `/var/log/sudo/` folder exists and logs commands.
   - Logs update when a `sudo` command is executed.

---

### UFW / Firewalld

1. Ensure:
   - UFW (or Firewalld) is installed and operational.
   - A rule exists for port 4242.
2. Test adding and removing a rule for port 8080.

---

### SSH

1. Verify:
   - SSH is installed and operational.
   - SSH uses port 4242 exclusively.
   - Root login via SSH is disabled.

2. Test SSH login using a newly created user with either a key or password.

---

### Script Monitoring

1. The student must explain:
   - How their script works and its code.
   - The purpose of **cron** and how it is set up to run the script every 10 minutes at startup.
2. Verify:
   - The script runs dynamically with updated values.
   - The script stops after startup without being modified.

---
