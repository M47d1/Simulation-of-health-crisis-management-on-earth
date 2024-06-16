# Health Crisis Management Simulation on Earth

The Health Crisis Management Simulation is a text-based program that models the spread of the virus and efforts to maintain patient health over a ten-day period. Players are required to make daily decisions to ensure patients stay alive.

## Feature

- **Virus Spread Scenario**: Models the spread of the virus from the second day to the tenth day.
- **Patient Health Management**: Players must prioritize patients to be given medicine every day.
- **Daily Decisions**: Each decision will affect the patient's survival and the overall condition of the Earth.
- **Daily Information**: Displays the status of the virus and the number of patients who are still alive every day.
- **Realistic Challenge**: Tests the player's ability to make quick and correct decisions under pressure.

## Rule of the game

1. **Day One**: All patients have full health points (HP) of 100, without the threat of viruses.
2. **Days Two to Ten**:
 - The virus begins to spread, reducing the patient's HP by 20 every day.
 - HP patients are randomized and can decrease drastically without treatment.
 - Players can only administer medicine to one patient per day.
 - If the patient's HP reaches zero, the patient will die.
3. **Winning and Losing Conditions**:
 - If all patients die before the seventh day, the game ends in failure.
 - If at least one patient remains alive until the seventh day, the game ends in success.

## How to play

1. **Setup**: Make sure you have C++ installed on your system.
2. **Running the Simulation**:
 ```bash
 (Project name).cpp
