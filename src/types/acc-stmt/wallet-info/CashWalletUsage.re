type t = {
  wallet_balance: WalletBalance.t,
  last_recharge_event: option(RechargeEvent.t), //option is a built in variant in ReasonML which is used to represent nullable types in the code
}