 int maxLength = 0;

        // Iterate through all possible characters 'A' to 'Z'
        for (char target = 'A'; target <= 'Z'; ++target) {
            int left = 0, count = 0; // Left pointer and count of non-target characters

            for (int right = 0; right < s.size(); ++right) {
                // Count the number of characters that are not equal to the target character
                if (s[right] != target) {
                    count++;
                }

                // If count exceeds k, move the left pointer to maintain the condition
                while (count > k) {
                    if (s[left] != target) {
                        count--; // Decrease count of non-target characters
                    }
                    left++;
                }

                // Update maximum length for this character
                maxLength = max(maxLength, right - left + 1);
            }
        }

        return maxLength; // Return the overall maximum length found