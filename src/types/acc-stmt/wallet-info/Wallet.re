type t =
  | CreditWallet(CreditWalletStrategy.t, CreditWalletUsage.t)
  | CashWallet(CashWalletUsage.t);