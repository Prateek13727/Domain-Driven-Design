## Product Requirement Specification

- Every Account Statement has a Business account  And a wallet And a Statement-Id and a Cycle Summary.
    - Every Business account, has a name And brand name 
    - Statement-Id is a unique string to uniquely identify the account statement
    - A Wallet can be of two types: Cash Or Credit
        - A cash account has a wallet balance and a last recharge event
        - A credit account has a wallet-balance And a credit limit And a credit amount consumed. Credit amount consumed is the negative of wallet balance
    - A Cycle Summary has a Cycle Duration And a list of Orders And a list of Transactions And a date-of-generation
        - A cycle duration has a start-date, end-date and a time-zone
        - A Transaction can be of two types: debit Or credit.
        - Every cycle, multiple orders (trips/bookings) can be placed from a business account

  - Account Stmt is generated at the end of the Cycle Duration and sent to the customer. The Cycle has a duration of 7 days.
  - No account statements are sent if there are no cycle orders
