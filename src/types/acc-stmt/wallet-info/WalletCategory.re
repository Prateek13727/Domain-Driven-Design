type t =
  | Credit_Account_Wallet_Usage
  | Advance_Account_Wallet_Usage;

let fromString = (wallet_type: string): t => {
  switch (wallet_type) {
  | "credit_account_wallet_usage" => Credit_Account_Wallet_Usage
  | "advance_account_wallet_usage" => Advance_Account_Wallet_Usage
  | _ => raise(Not_found)
  };
};