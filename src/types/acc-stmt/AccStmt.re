//aggregate root for the Account Statement Entity
type t = {
  stmt_id: string,
  acc_cycle: AccountCycle.t,
  business_info: BusinessInfo.t,
  wallet_info: Wallet.t
}