
## Overview

This console application is designed to manage and display information about football teams. It allows users to interact with a list of teams through various options, including adding new teams, removing existing ones, and viewing detailed information about teams and their matches.

## Features

- **Add Team from File**: Import a team from a file.
- **Manually Add Team**: Add a team manually via console input.
- **Remove Team**: Remove an existing team from the list.
- **View Team Details**: Display detailed information about a specific team.
- **View All Teams**: Display information about all teams.
- **View Players of a Team**: Show details of all players in a specific team.
- **Update Player Performance**: Update the performance metrics of a player.
- **Display Fixture**: Show the fixtures for the league.

## How to Use

1. **Running the Application**
   - Compile and run the application. It will display a menu with various options.

2. **Menu Options**
   - **[1] Add a Team from File**: Load a team from a file. The file should contain team data in a predefined format.
   - **[2] Manually Add Team**: Enter team details manually.
   - **[3] Remove a Team**: Select and remove a team from the list.
   - **[4] View Team Details**: Enter a team nickname to view detailed information about that team, including matches played.
   - **[5] View All Teams**: Display information about all teams in the system.
   - **[6] View Players of a Team**: Enter a team nickname to view all players and their details.
   - **[7] Update Player Performance**: Update the performance metrics of a specific player.
   - **[8] Display Fixture**: (Not implemented yet) View the fixture list for the league.
   - **[9] Exit**: Exit the application.

3. **Navigating the Application**
   - After performing an action, you will be prompted to return to the main menu or exit the application.

## Getting Started

1. **Prerequisites**
   - Ensure you have a C++ compiler installed on your machine.

2. **Compilation**
   - Compile the application using a C++ compiler. For example:
     ```bash
     g++ -o team_management team_management.cpp
     ```

3. **Running the Application**
   - Execute the compiled program:
     ```bash
     ./team_management
     ```
