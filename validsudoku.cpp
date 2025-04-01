map<int, set<char>> rowMap, colMap, boxMap;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num == '.') continue; // Skip empty cells

                int boxIndex = (i / 3) * 3 + (j / 3); // Unique index for each 3×3 box

                // Check if the number already exists in row, column, or box
                if (rowMap[i].count(num) || colMap[j].count(num) || boxMap[boxIndex].count(num))
                    return false;

                // Insert the number into respective row, column, and box sets
                rowMap[i].insert(num);
                colMap[j].insert(num);
                boxMap[boxIndex].insert(num);
            }
        }
        return true;
