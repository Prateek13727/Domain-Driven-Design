type t = 
  | Debit(DebitTransaction.t)
  | Credit(CreditTransaction.t)