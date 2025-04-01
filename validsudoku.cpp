map<int, set<char>> rowMap, colMap, boxMap;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num == '.') continue;

                int boxIndex = (i / 3) * 3 + (j / 3); 

              
                if (rowMap[i].count(num) || colMap[j].count(num) || boxMap[boxIndex].count(num))
                    return false;

        
                rowMap[i].insert(num);
                colMap[j].insert(num);
                boxMap[boxIndex].insert(num);
            }
        }
        return true;
