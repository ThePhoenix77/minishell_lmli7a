# minishell topics

#  Token Recognition :

--->  If the end of input is recognized, the shell has reached the end of the input text, such as the end of a command line input.

--->  When the shell recognizes the end of the input, it will complete (or "delimit") the token it is currently processing. This means that the sequence of characters that make up the current token is finalized and ready to be used by the shell.
{
    Input: echo Hello
      Tokenization Process:
          echo is recognized as a token.
            A space indicates the end of echo, so echo is delimited.
              Hello is then recognized as a token.
}

--->  If there is no current token, the shell has not started building a token at the end of the input. This can happen if there is whitespace or no characters after the last token.

--->  If no token is being built, the shell will return a special marker indicating the end of input. This marker tells the shell that there are no more tokens to process.

===> This rule describes how the shell handles characters when they are part of an operator. An operator in a shell context is a character or sequence of characters that performs a specific function, such as &&, ||, |, >, and <.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# If the previous character was used as part of an operator :                                                                                                                -
This means the shell has already recognized that the previous character is part of an operator. For example, in &&, the first & is recognized as part of an operator.        -
# and the current character is not quoted :                                                                                                                                  -
The current character being analyzed by the shell is not enclosed in quotes (single or double quotes). Quoted characters are treated literally and not as part of operators. -
# and can be used with the current characters to form an operator :                                                                                                          -
The current character can combine with the previous characters to form a valid operator. For example, the second & in && combines with the first & to form the && operator.  -
# it shall be used as part of that (operator) token :                                                                                                                        -
The current character is added to the operator token that is being formed. So, && is recognized as a single operator token rather than two separate & characters.            -
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
--->  If the previous character was used as part of an operator and the current character cannot be used with the current characters to form an operator, the operator containing the previous character shall be delimited.




