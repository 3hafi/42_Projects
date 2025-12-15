#include <stdio.h>  // For printf
#include <stdlib.h> // For malloc, free
#include <string.h> // For strdup (to make a quick fake s1)

// Paste your prototypes here so test.c knows they exist
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);

int main(void)
{
    // 1. Prepare the "artificial" scenario
    char *s1 = strdup("Hello"); // We use strdup to create a malloc'd string like GNL would
    char *s2 = " World";
    
    // 2. Run your function
    printf("Test 1: Normal Join\n");
    char *result = ft_strjoin(s1, s2);

    // 3. Verify the result (The Eye Test)
    if (result)
    {
        printf("Output: |%s|\n", result); // Should print |Hello World|
        free(result); // Clean up the result
    }
    else
    {
        printf("Output: NULL (Error)\n");
    }

    // 4. Test the "Crash" Scenario (NULL input)
    printf("\nTest 2: NULL s1 (First time call)\n");
    char *result2 = ft_strjoin(NULL, "Start");
    if (result2)
    {
        printf("Output: |%s|\n", result2); // Should print |Start|
        free(result2);
    }
    
    return (0);
}