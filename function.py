def is_leap(year):
    """
    Determines if a year is a leap year based on Gregorian calendar rules.

    Args:
        year: The year to check.

    Returns:
        True if the year is a leap year, False otherwise.
    """
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                return True  
            else:
                return False 
        else:
            return True      
    else:
        return False         
    
